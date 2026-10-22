/*
 * FUN_1002DBE0 (204 B) - __stdcall, RET 0xC (3 args).
 * Allocate (FUN_10001d50) and zero a buffer of arg3*4 bytes, then fill
 * it by calling FUN_1001c2d0(arg2[i],&local) for each element and storing
 * the result.  On success stores the buffer into *arg1 and returns the
 * last HRESULT.  On failure frees the buffer via FUN_1002dcb0 and, if
 * arg1 is non-null, frees it via FUN_1001c2a0; returns 0x8007000e.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10001d50(void);    /* rel32 call (alloc) */
extern void __stdcall FUN_1002dcb0(void);  /* rel32 call (free array) */
extern void __stdcall FUN_1001c2a0(void);  /* rel32 call */
extern void __stdcall FUN_1001c2d0(void);  /* rel32 call */

__declspec(naked) void __stdcall FUN_1002DBE0(void)
{
    __asm {
        push    ecx
        push    ebx
        mov     ebx, dword ptr [esp + 0x14]
        push    esi
        xor     esi, esi
        cmp     ebx, esi
        mov     dword ptr [esp + 8], esi
        jne     L_dbff
        mov     eax, dword ptr [esp + 0x10]
        mov     dword ptr [eax], esi
        mov     eax, esi
        pop     esi
        pop     ebx
        pop     ecx
        ret     0xc
    L_dbff:
        push    ebp
        push    edi
        lea     edi, [ebx*4]
        push    edi
        call    FUN_10001d50
        mov     ebp, eax
        add     esp, 0x4
        test    ebp, ebp
        jne     L_dc48
        mov     dword ptr [esp + 0x20], 0x8007000e
    L_dc1f:
        test    ebp, ebp
        je      L_dc2c
        push    ebx
        push    ebp
        push    1
        call    FUN_1002dcb0
    L_dc2c:
        mov     esi, dword ptr [esp + 0x20]
    L_dc30:
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        pop     edi
        pop     ebp
        je      L_dc40
        push    eax
        call    FUN_1001c2a0
    L_dc40:
        mov     eax, esi
        pop     esi
        pop     ebx
        pop     ecx
        ret     0xc
    L_dc48:
        mov     ecx, edi
        mov     edx, ecx
        shr     ecx, 2
        xor     eax, eax
        mov     edi, ebp
        rep stosd
        mov     ecx, edx
        and     ecx, 3
        rep stosb
        xor     edi, edi
        test    ebx, ebx
        jbe     L_dca4
        mov     eax, dword ptr [esp + 0x1c]
        sub     eax, ebp
        mov     esi, ebp
        mov     dword ptr [esp + 0x1c], eax
        jmp     L_dc74
    L_dc70:
        mov     eax, dword ptr [esp + 0x1c]
    L_dc74:
        mov     edx, dword ptr [eax + esi]
        lea     ecx, [esp + 0x10]
        push    ecx
        push    edx
        call    FUN_1001c2d0
        test    eax, eax
        mov     dword ptr [esp + 0x20], eax
        jl      L_dc1f
        mov     eax, dword ptr [esp + 0x10]
        mov     dword ptr [esi], eax
        inc     edi
        add     esi, 4
        cmp     edi, ebx
        mov     dword ptr [esp + 0x10], 0
        jb      L_dc70
        mov     esi, dword ptr [esp + 0x20]
    L_dca4:
        mov     ecx, dword ptr [esp + 0x18]
        mov     dword ptr [ecx], ebp
        jmp     L_dc30
    }
}
