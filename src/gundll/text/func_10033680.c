/*
 * FUN_10033680 (206 B) -- __stdcall, RET 0x14.
 * Allocates a 0x38-byte object via FUN_10001d50, constructs it via
 * FUN_10033d00, then links a 0xc-byte list node into a doubly-linked list
 * rooted at param_2. Returns 0 on success, 0x8007000e on failure.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10001d50(void);
extern void __cdecl FUN_10033d00(void);

__declspec(naked) void FUN_10033680(void)
{
    __asm {
        push    -1
        push    0x10048a8b
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        push    ecx
        push    ebp
        push    0x38
        call    FUN_10001d50
        add     esp, 0x4
        mov     dword ptr [esp + 0x4], eax
        test    eax, eax
        mov     dword ptr [esp + 0x10], 0x0
        jz      L_cb
        mov     ecx, dword ptr [esp + 0x28]
        mov     edx, dword ptr [esp + 0x24]
        push    ecx
        mov     ecx, dword ptr [esp + 0x24]
        push    edx
        push    ecx
        mov     ecx, eax
        call    FUN_10033d00
        mov     ebp, eax
        jmp     L_cd
    L_cb:
        xor     ebp, ebp
    L_cd:
        test    ebp, ebp
        mov     dword ptr [esp + 0x10], 0xffffffff
        jnz     L_f0
        mov     eax, 0x8007000e
        pop     ebp
        mov     ecx, dword ptr [esp + 0x4]
        mov     dword ptr fs:[0], ecx
        add     esp, 0x10
        ret     0x14
    L_f0:
        push    ebx
        mov     ebx, dword ptr [esp + 0x20]
        push    esi
        mov     esi, dword ptr [ebx + 0x4]
        push    edi
        mov     edi, dword ptr [esi + 0x4]
        push    0xc
        call    FUN_10001d50
        add     esp, 0x4
        test    edi, edi
        mov     dword ptr [eax], esi
        jnz     L_10f
        mov     edi, eax
    L_10f:
        mov     dword ptr [eax + 0x4], edi
        mov     dword ptr [esi + 0x4], eax
        mov     edx, dword ptr [eax + 0x4]
        mov     dword ptr [edx], eax
        add     eax, 0x8
        test    eax, eax
        jz      L_123
        mov     dword ptr [eax], ebp
    L_123:
        mov     edx, dword ptr [ebx + 0x8]
        mov     eax, dword ptr [esp + 0x24]
        pop     edi
        inc     edx
        test    eax, eax
        pop     esi
        mov     dword ptr [ebx + 0x8], edx
        pop     ebx
        jz      L_13a
        add     ebp, 0x18
        mov     dword ptr [eax], ebp
    L_13a:
        mov     ecx, dword ptr [esp + 0x8]
        xor     eax, eax
        pop     ebp
        mov     dword ptr fs:[0], ecx
        add     esp, 0x10
        ret     0x14
    }
}
