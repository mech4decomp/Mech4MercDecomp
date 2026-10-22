/*
 * FUN_0068b600 (135 B) — __thiscall (ECX = this), plain RET.
 *
 * Destructor: sets vtable (0x798e1c), iterates an array of pointers
 * (this+0x40 .. this+0x44), freeing each non-null entry via
 * FUN_005d9c70/FUN_005d9500/FUN_004084e0, then frees the array
 * (this+0x40) and another buffer (this+0x34), and calls FUN_006b06d0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned int g_007f2438;
extern void __cdecl FUN_005d9c70(unsigned int a);
extern void __cdecl FUN_005d9500(void);
extern void __cdecl FUN_004084e0(void *p);
extern void __cdecl FUN_006b06d0(void);

__declspec(naked) void __stdcall FUN_0068b600(void)
{
    __asm {
        push    ecx
        push    ebx
        mov     ebx, ecx
        mov     eax, dword ptr [ebx + 0x44]
        push    esi
        mov     dword ptr [ebx], 0x798e1c
        mov     esi, dword ptr [ebx + 0x40]
        sub     eax, esi
        sar     eax, 0x2
        test    eax, eax
        jle     L_654
        push    ebp
        push    edi
        mov     ebp, eax
L_61e:
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      L_64c
        mov     ecx, dword ptr [g_007f2438]
        push    eax
        call    FUN_005d9c70
        mov     edi, dword ptr [esi]
        test    edi, edi
        jz      L_646
        mov     ecx, edi
        call    FUN_005d9500
        push    edi
        call    FUN_004084e0
        add     esp, 0x4
L_646:
        mov     dword ptr [esi], 0x0
L_64c:
        add     esi, 0x4
        dec     ebp
        jnz     L_61e
        pop     edi
        pop     ebp
L_654:
        mov     eax, dword ptr [ebx + 0x40]
        test    eax, eax
        mov     dword ptr [esp + 0x8], eax
        jz      L_668
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_668:
        mov     eax, dword ptr [ebx + 0x34]
        test    eax, eax
        mov     dword ptr [esp + 0x8], eax
        jz      L_67c
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_67c:
        mov     ecx, ebx
        call    FUN_006b06d0
        pop     esi
        pop     ebx
        pop     ecx
        ret
    }
}
