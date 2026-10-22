/*
 * FUN_00467ce0 (156 B) — MLR PMesh constructor (__thiscall, RET 0xc).
 * Calls FUN_0046bd00, sets vtable 0x76f024, sizes a vertex buffer via
 * virtual calls, and asserts version via FUN_006fab90.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int   g_007d9950;

extern void __cdecl FUN_0046bd00(void);
extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_00467ce0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     eax, dword ptr [g_007d9950]
        push    ebx
        mov     ebx, dword ptr [ebp + 0x10]
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 0xc]
        push    ebx
        push    edi
        mov     esi, ecx
        push    eax
        call    FUN_0046bd00
        xor     eax, eax
        cmp     ebx, eax
        mov     dword ptr [esi + 0x90], eax
        mov     dword ptr [esi + 0x94], eax
        mov     dword ptr [esi], 0x76f024
        jle     L_467d2c
        cmp     ebx, 0x2
        jg      L_467d2c
        push    0x76e300
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      L_467d69
        int     3
        jmp     L_467d69
L_467d2c:
        mov     edx, dword ptr [edi]
        push    0x4
        lea     ebx, [esi + 0x94]
        push    ebx
        mov     ecx, edi
        call    dword ptr [edx + 0x20]
        mov     ebx, dword ptr [ebx]
        test    ebx, ebx
        jbe     L_467d5f
        mov     eax, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [eax + 0x4]
        mov     edx, dword ptr [edi]
        mov     dword ptr [esi + 0x90], eax
        lea     eax, [ebx + ebx*2]
        shl     eax, 0x2
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x18]
        jmp     L_467d69
L_467d5f:
        mov     dword ptr [esi + 0x90], 0x0
L_467d69:
        lea     ecx, [esi + 0x88]
        pop     edi
        mov     dword ptr [esi + 0x98], ecx
        mov     eax, esi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0xc
    }
}
