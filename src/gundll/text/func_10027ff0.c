/*
 * FUN_10027ff0 (173 B) - __stdcall, RET 0x18. Validates param_1+0xc, calls
 * FUN_1001c760, allocates three short* buffers via FUN_10001dd0, stores them
 * into the object, frees on partial failure.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_1001c760(void);   /* rel32 call */
extern void __cdecl FUN_10001dd0(void);   /* rel32 call */
extern void __cdecl FUN_10001d60(void);   /* rel32 call */

__declspec(naked) void __stdcall FUN_10027ff0(void)
{
    __asm {
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esi + 0xc]
        push    edi
        xor     edi, edi
        test    eax, eax
        jz      L_2800d
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0xc112000d
        pop     ebx
        ret     0x18
L_2800d:
        mov     eax, dword ptr [esp + 0x18]
        push    eax
        push    esi
        call    FUN_1001c760
        test    eax, eax
        jl      L_28096
        mov     ebp, dword ptr [esp + 0x20]
        push    ebp
        call    FUN_10001dd0
        mov     ebx, eax
        test    ebx, ebx
        jnz     L_28030
        test    ebp, ebp
        jnz     L_28075
L_28030:
        mov     ebp, dword ptr [esp + 0x24]
        push    ebp
        call    FUN_10001dd0
        mov     edi, eax
        test    edi, edi
        jnz     L_28044
        test    ebp, ebp
        jnz     L_28075
L_28044:
        mov     ebp, dword ptr [esp + 0x28]
        push    ebp
        call    FUN_10001dd0
        mov     ecx, eax
        test    ecx, ecx
        jnz     L_28058
        test    ebp, ebp
        jnz     L_28075
L_28058:
        mov     edx, dword ptr [esp + 0x1c]
        mov     dword ptr [esi + 0x28], edi
        pop     edi
        mov     dword ptr [esi + 0x24], ebx
        mov     byte ptr [esi + 0x4], 0x1
        mov     dword ptr [esi + 0x20], edx
        mov     dword ptr [esi + 0x2c], ecx
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        ret     0x18
L_28075:
        test    ebx, ebx
        mov     esi, 0x8007000e
        jz      L_28087
        push    ebx
        call    FUN_10001d60
        add     esp, 0x4
L_28087:
        test    edi, edi
        jz      L_28094
        push    edi
        call    FUN_10001d60
        add     esp, 0x4
L_28094:
        mov     eax, esi
L_28096:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x18
    }
}
