/*
 * FUN_1000e320 (271 B) — __stdcall, RET 0x18.
 * Initializes a structure (param_1) with string/pointer fields; error cleanup
 * path frees partial allocations.
 *
 * CFLAGS: /O1
 */

extern int __stdcall FUN_1001c760(void);
extern int __stdcall FUN_10001dd0(void);
extern int __stdcall FUN_1002e1c0(void);
extern void __cdecl FUN_10001d60(void);
extern void __stdcall FUN_1002e220(void);

__declspec(naked) void __stdcall FUN_1000e320(void)
{
    __asm {
        sub     esp, 0x8
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x18]
        mov     eax, dword ptr [esi + 0xc]
        xor     ebp, ebp
        cmp     eax, ebp
        push    edi
        mov     dword ptr [esp + 0x10], ebp
        mov     dword ptr [esp + 0x14], ebp
        jz      L_e34b
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0xc112000d
        pop     ebx
        add     esp, 0x8
        ret     0x18
    L_e34b:
        mov     eax, dword ptr [esp + 0x20]
        push    eax
        push    esi
        call    FUN_1001c760
        mov     edi, eax
        cmp     edi, ebp
        jl      L_e3e8
        mov     edi, dword ptr [esp + 0x24]
        push    edi
        call    FUN_10001dd0
        mov     ebx, eax
        test    ebx, ebx
        jnz     L_e374
        test    edi, edi
        jnz     L_e3d6
    L_e374:
        mov     ecx, dword ptr [esp + 0x28]
        push    ecx
        lea     edx, [esp + 0x14]
        push    edx
        call    FUN_1002e1c0
        mov     edi, eax
        test    edi, edi
        jl      L_e3db
        mov     edi, dword ptr [esp + 0x2c]
        push    edi
        call    FUN_10001dd0
        mov     ebp, eax
        test    ebp, ebp
        jnz     L_e39d
        test    edi, edi
        jnz     L_e3d6
    L_e39d:
        mov     eax, dword ptr [esp + 0x30]
        push    eax
        lea     ecx, [esp + 0x18]
        push    ecx
        call    FUN_1002e1c0
        mov     edi, eax
        test    edi, edi
        jl      L_e3db
        mov     eax, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0x10]
        mov     dword ptr [esi + 0x2c], eax
        mov     eax, edi
        pop     edi
        mov     dword ptr [esi + 0x20], ebx
        mov     dword ptr [esi + 0x28], ebp
        mov     byte ptr [esi + 0x4], 0x1
        mov     dword ptr [esi + 0x24], edx
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x8
        ret     0x18
    L_e3d6:
        mov     edi, 0x8007000e
    L_e3db:
        test    ebx, ebx
        jz      L_e3e8
        push    ebx
        call    FUN_10001d60
        add     esp, 0x4
    L_e3e8:
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        jz      L_e3ff
        mov     ecx, dword ptr [esi + 0xc]
        test    ecx, ecx
        setnz   cl
        push    eax
        push    ecx
        call    FUN_1002e220
    L_e3ff:
        test    ebp, ebp
        jz      L_e40c
        push    ebp
        call    FUN_10001d60
        add     esp, 0x4
    L_e40c:
        mov     eax, dword ptr [esp + 0x14]
        test    eax, eax
        jz      L_e423
        mov     ecx, dword ptr [esi + 0xc]
        test    ecx, ecx
        setnz   dl
        push    eax
        push    edx
        call    FUN_1002e220
    L_e423:
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x8
        ret     0x18
    }
}
