/*
 * FUN_10008e60 (278 B) — __stdcall, RET 0xC.
 * Validates a string, converts it, and builds an object via a chain of calls;
 * error cleanup frees partial allocations.
 *
 * CFLAGS: /O1
 */

extern int g_10075060;
extern int __stdcall FUN_100021d0(void);
extern int __stdcall FUN_1001cb50(void);
extern int __stdcall FUN_1001b110(void);
extern void __cdecl FUN_10001d60(void);
extern void __stdcall FUN_1001cca0(void);
extern int __stdcall FUN_10008f80(void);

__declspec(naked) void __stdcall FUN_10008e60(void)
{
    __asm {
        sub     esp, 0xc
        push    ebx
        push    ebp
        push    esi
        xor     ebx, ebx
        push    edi
        mov     edi, dword ptr [esp + 0x24]
        xor     ebp, ebp
        cmp     edi, ebx
        mov     dword ptr [esp + 0x14], ebx
        mov     dword ptr [esp + 0x18], ebx
        mov     dword ptr [esp + 0x10], ebx
        jz      L_f67
        mov     eax, dword ptr [esp + 0x20]
        cmp     eax, ebx
        jz      L_f67
        cmp     byte ptr [eax + edi - 0x1], bl
        jnz     L_f67
        lea     ecx, [esp + 0x14]
        push    ecx
        push    edi
        push    eax
        call    FUN_100021d0
        mov     esi, eax
        cmp     esi, ebx
        jl      L_ef7
        mov     eax, dword ptr [esp + 0x14]
        push    ebx
        push    ebx
        lea     edx, [esp + 0x18]
        push    edx
        push    0x1
        push    edi
        push    eax
        call    FUN_1001cb50
        mov     esi, eax
        cmp     esi, ebx
        jl      L_ef7
        mov     eax, dword ptr [esp + 0x10]
        lea     edx, [esp + 0x18]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    edx
        mov     dword ptr [esp + 0x1c], ebx
        mov     ecx, dword ptr [eax]
        push    eax
        call    dword ptr [ecx]
        mov     esi, eax
        cmp     esi, ebx
        jl      L_ef7
        mov     eax, dword ptr [esp + 0x18]
        push    eax
        call    FUN_1001b110
        cmp     eax, ebx
        jnz     L_f30
        mov     esi, 0xc112000e
    L_ef7:
        mov     eax, dword ptr [esp + 0x14]
        cmp     eax, ebx
        jz      L_f08
        push    eax
        call    FUN_10001d60
        add     esp, 0x4
    L_f08:
        mov     eax, dword ptr [esp + 0x10]
        cmp     eax, ebx
        jz      L_f16
        push    eax
        call    FUN_1001cca0
    L_f16:
        cmp     ebp, ebx
        jz      L_f24
        mov     edx, dword ptr [ebp]
        push    0x1
        mov     ecx, ebp
        call    dword ptr [edx + 0x4]
    L_f24:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xc
        ret     0xc
    L_f30:
        mov     ecx, dword ptr [esp + 0x10]
        push    ecx
        push    eax
        call    FUN_10008f80
        mov     ebp, eax
        cmp     ebp, ebx
        jnz     L_f48
        mov     esi, 0x8007000e
        jmp     L_ef7
    L_f48:
        mov     dword ptr [esp + 0x10], ebx
        mov     edx, dword ptr [ebp]
        push    ebp
        call    dword ptr [edx + 0x8]
        mov     esi, eax
        cmp     esi, ebx
        jl      L_ef7
        mov     eax, dword ptr [esp + 0x28]
        mov     dword ptr [eax], ebp
        xor     ebp, ebp
        mov     dword ptr [esp + 0x10], ebx
        jmp     L_ef7
    L_f67:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x80070057
        pop     ebx
        add     esp, 0xc
        ret     0xc
    }
}
