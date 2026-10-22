/*
 * FUN_00487ce0 (196 B) - MLR effect buffer append (__thiscall, RET 0x4).
 * Grows the effect pointer buffer if needed, stores a new effect pointer,
 * bumps its refcount, and increments the buffer count.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);

extern int g_007b9590;

__declspec(naked) void FUN_00487ce0(void)
{
    __asm {
        push    ecx
        xor     eax, eax
        push    esi
        mov     esi, ecx
        mov     al, byte ptr [esi + 0x1c]
        push    edi
        mov     edi, eax
        mov     eax, dword ptr [esi + 0x18]
        cmp     edi, eax
        mov     dword ptr [esp + 0x8], edi
        jnc     L_487cff
        test    eax, eax
        jnz     L_487d88
L_487cff:
        mov     ecx, dword ptr [g_007b9590]
        push    ebx
        push    ebp
        push    ecx
        call    FUN_006f4950
        mov     ebp, dword ptr [esi + 0x18]
        lea     ebx, [edi + 0x4]
        cmp     ebx, ebp
        jz      L_487d81
        test    ebx, ebx
        jbe     L_487d6b
        lea     edx, [ebx*0x4 + 0x0]
        push    edx
        call    FUN_004084d0
        mov     edx, dword ptr [esi + 0x14]
        add     esp, 0x4
        test    edx, edx
        mov     edi, eax
        jz      L_487d62
        cmp     ebx, ebp
        mov     ecx, ebx
        jc      L_487d3c
        mov     ecx, ebp
L_487d3c:
        mov     eax, ecx
        dec     ecx
        test    eax, eax
        jz      L_487d56
        lea     eax, [edi + ecx*0x4]
        sub     edx, edi
        inc     ecx
L_487d49:
        mov     ebp, dword ptr [edx + eax*0x1]
        mov     dword ptr [eax], ebp
        dec     ecx
        sub     eax, 0x4
        test    ecx, ecx
        ja      L_487d49
L_487d56:
        mov     eax, dword ptr [esi + 0x14]
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_487d62:
        mov     dword ptr [esi + 0x14], edi
        mov     edi, dword ptr [esp + 0x10]
        jmp     L_487d7e
L_487d6b:
        mov     ecx, dword ptr [esi + 0x14]
        push    ecx
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [esi + 0x14], 0x0
L_487d7e:
        mov     dword ptr [esi + 0x18], ebx
L_487d81:
        call    FUN_006f49a0
        pop     ebp
        pop     ebx
L_487d88:
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esi + 0x14]
        mov     dword ptr [edx + edi*0x4], eax
        inc     word ptr [eax + 0x8]
        mov     al, byte ptr [esi + 0x1c]
        inc     al
        pop     edi
        mov     byte ptr [esi + 0x1c], al
        pop     esi
        pop     ecx
        ret     0x4
    }
}
