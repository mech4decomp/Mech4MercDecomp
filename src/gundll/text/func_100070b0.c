/*
 * FUN_100070b0 (500 B) - __stdcall, RET 0x8.
 * SEH-guarded: initializes a local object (FUN_1000d110). If param_2+4 is
 * zero returns 0xc1120008. Otherwise reads fields from param_2, and if
 * param_1+0x68 is empty allocates a 0x10 object (FUN_10001d50/FUN_10007470)
 * and opens a key (FUN_100074c0, 0x10049538). Then a chain of registry/object
 * helpers (FUN_10007730/10007830/10007920/10007ef0/10001b10/1000d190/
 * 10001970). On error frees local_50 (FUN_10007d90/10001d60). Cleans up via
 * FUN_1000d3e0.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 */

extern int  g_10049538;                       /* PTR_s_Gun2Key_10049538 */
extern void __cdecl FUN_1000d110(void);       /* rel32 call, thiscall */
extern void __cdecl FUN_10001d50(void);       /* rel32 call, 1 arg, returns ptr */
extern void __cdecl FUN_10007470(void);       /* rel32 call, thiscall */
extern void __cdecl FUN_100074c0(void);       /* rel32 call, 3 args */
extern void __cdecl FUN_10007730(void);       /* rel32 call, 2 args */
extern void __cdecl FUN_10007830(void);       /* rel32 call, 3 args */
extern void __cdecl FUN_10007920(void);       /* rel32 call, 4 args */
extern void __cdecl FUN_10007ef0(void);       /* rel32 call, 2 args */
extern void __cdecl FUN_10001b10(void);       /* rel32 call, 3 args */
extern void __cdecl FUN_1000d190(void);       /* rel32 call, 6 args */
extern void __cdecl FUN_10001970(void);       /* rel32 call, 2 args */
extern void __cdecl FUN_10007d90(void);       /* rel32 call, thiscall */
extern void __cdecl FUN_10001d60(void);       /* rel32 call, 1 arg */
extern void __cdecl FUN_1000d3e0(void);       /* rel32 call, thiscall */

__declspec(naked) void __stdcall FUN_100070b0(void)
{
    __asm {
        push    -1
        push    0x100471d3
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x44
        push    ebx
        push    ebp
        push    esi
        push    edi
        lea     ecx, [esp + 0x24]
        call    FUN_1000d110
        mov     eax, dword ptr [esp + 0x68]
        mov     cl, byte ptr [eax + 0x4]
        xor     ebx, ebx
        cmp     cl, bl
        mov     dword ptr [esp + 0x5c], ebx
        mov     dword ptr [esp + 0x1c], ebx
        mov     dword ptr [esp + 0x14], ebx
        mov     dword ptr [esp + 0x18], ebx
        mov     dword ptr [esp + 0x10], ebx
        jnz     L_7100
        mov     esi, 0xc1120008
        jmp     L_7182
    L_7100:
        mov     esi, dword ptr [eax + 0x20]
        cmp     esi, ebx
        mov     ecx, dword ptr [eax + 0x1c]
        mov     edx, dword ptr [eax + 0x24]
        mov     ebp, dword ptr [eax + 0x28]
        mov     dword ptr [esp + 0x20], ecx
        mov     dword ptr [esp + 0x68], edx
        jge     L_7128
        mov     eax, dword ptr [esp + 0x64]
        mov     dword ptr [eax + 0x40], 0x4
        mov     dword ptr [eax + 0x44], esi
        jmp     L_7182
    L_7128:
        mov     edi, dword ptr [esp + 0x64]
        cmp     dword ptr [edi + 0x68], ebx
        jnz     L_71d6
        push    0x10
        call    FUN_10001d50
        add     esp, 0x4
        mov     dword ptr [esp + 0x64], eax
        cmp     eax, ebx
        mov     byte ptr [esp + 0x5c], 0x1
        jz      L_7155
        mov     ecx, eax
        call    FUN_10007470
        jmp     L_7157
    L_7155:
        xor     eax, eax
    L_7157:
        cmp     eax, ebx
        mov     byte ptr [esp + 0x5c], bl
        mov     dword ptr [edi + 0x68], eax
        jnz     L_71c1
        mov     esi, 0x8007000e
    L_7167:
        mov     ecx, dword ptr [esp + 0x10]
        cmp     ecx, ebx
        jz      L_7182
        mov     dword ptr [edi + 0x6c], ebx
        mov     edi, ecx
        call    FUN_10007d90
        push    edi
        call    FUN_10001d60
        add     esp, 0x4
    L_7182:
        mov     eax, dword ptr [esp + 0x14]
        push    eax
        call    FUN_10001d60
        mov     ecx, dword ptr [esp + 0x1c]
        push    ecx
        call    FUN_10001d60
        add     esp, 0x8
        lea     ecx, [esp + 0x24]
        mov     dword ptr [esp + 0x5c], 0xffffffff
        call    FUN_1000d3e0
        mov     ecx, dword ptr [esp + 0x54]
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x50
        ret     0x8
    L_71c1:
        mov     ecx, dword ptr [g_10049538]
        push    0x1
        push    ecx
        push    eax
        call    FUN_100074c0
        mov     esi, eax
        cmp     esi, ebx
        jl      L_7167
    L_71d6:
        mov     edx, dword ptr [edi + 0x68]
        push    ebp
        push    edx
        call    FUN_10007730
        mov     esi, eax
        cmp     esi, ebx
        jl      L_7167
        mov     ecx, dword ptr [edi + 0x68]
        lea     eax, [esp + 0x1c]
        push    eax
        push    0x4
        push    ecx
        call    FUN_10007830
        mov     esi, eax
        cmp     esi, ebx
        jl      L_7167
        mov     edx, dword ptr [esp + 0x68]
        mov     eax, dword ptr [esp + 0x1c]
        push    edx
        mov     edx, dword ptr [edi + 0x68]
        push    eax
        lea     ecx, [esp + 0x18]
        push    ecx
        push    edx
        call    FUN_10007920
        mov     esi, eax
        cmp     esi, ebx
        jl      L_7167
        mov     ecx, dword ptr [esp + 0x10]
        lea     eax, [esp + 0x14]
        push    eax
        push    ecx
        call    FUN_10007ef0
        mov     esi, eax
        cmp     esi, ebx
        jl      L_7167
        mov     eax, dword ptr [edi + 0x64]
        mov     edx, dword ptr [esp + 0x10]
        push    eax
        lea     ecx, [esp + 0x1c]
        push    ecx
        push    edi
        mov     dword ptr [edi + 0x6c], edx
        call    FUN_10001b10
        mov     esi, eax
        cmp     esi, ebx
        jl      L_7167
        mov     edx, dword ptr [esp + 0x14]
        mov     eax, dword ptr [edi + 0x5c]
        mov     ecx, dword ptr [esp + 0x18]
        push    edx
        mov     edx, dword ptr [edi + 0x60]
        push    eax
        mov     eax, dword ptr [esp + 0x28]
        push    ecx
        push    edx
        push    eax
        lea     ecx, [esp + 0x38]
        push    ecx
        call    FUN_1000d190
        mov     esi, eax
        cmp     esi, ebx
        jl      L_7167
        lea     edx, [esp + 0x24]
        push    edx
        push    edi
        call    FUN_10001970
        mov     esi, eax
        cmp     esi, ebx
        jl      L_7167
        mov     dword ptr [esp + 0x10], ebx
        jmp     L_7182
    }
}
