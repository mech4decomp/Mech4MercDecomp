/*
 * FUN_004881d0 (141 B) - MLR effect buffer iteration (__thiscall, RET 0x10).
 * Iterates the effect buffer, cloning each matching effect via a virtual
 * call and appending the clone.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_00487ce0(void);

extern int g_007b9648;
extern int g_007b222c;
extern int g_007b98a4;

__declspec(naked) void FUN_004881d0(void)
{
    __asm {
        push    ecx
        mov     eax, dword ptr [g_007b9648]
        test    eax, eax
        jz      L_488259
        cmp     dword ptr [g_007b222c], 0x1
        jnz     L_488259
        xor     eax, eax
        mov     al, byte ptr [ecx + 0x1c]
        test    eax, eax
        jle     L_488259
        push    ebx
        mov     ebx, dword ptr [esp + 0x18]
        push    ebp
        mov     ebp, dword ptr [esp + 0x18]
        push    esi
        push    edi
        mov     edi, dword ptr [ecx + 0x14]
        mov     dword ptr [esp + 0x10], eax
L_4881ff:
        mov     eax, dword ptr [g_007b98a4]
        mov     esi, dword ptr [edi]
        mov     ecx, dword ptr [esi + 0x4]
        push    eax
        call    FUN_00415230
        test    al, al
        jz      L_488247
        mov     ecx, dword ptr [esp + 0x1c]
        mov     eax, dword ptr [esi]
        push    ebx
        push    ebp
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0xa4]
        mov     esi, eax
        test    esi, esi
        jz      L_488247
        mov     ecx, dword ptr [esp + 0x18]
        push    esi
        call    FUN_00487ce0
        dec     word ptr [esi + 0x8]
        cmp     word ptr [esi + 0x8], 0x0
        jnz     L_488247
        mov     edx, dword ptr [esi]
        push    0x1
        mov     ecx, esi
        call    dword ptr [edx]
L_488247:
        mov     eax, dword ptr [esp + 0x10]
        add     edi, 0x4
        dec     eax
        mov     dword ptr [esp + 0x10], eax
        jnz     L_4881ff
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
L_488259:
        pop     ecx
        ret     0x10
    }
}
